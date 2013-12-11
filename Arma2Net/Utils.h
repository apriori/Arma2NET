/*
* Copyright 2013 Arma2NET Developers
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include "Addin.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Reflection;

namespace Arma2Net
{
	public ref class Utils abstract sealed
	{
	private:
		static StreamWriter^ logWriter;
	internal:
		static Dictionary<String^, Addin^>^ LoadedAddins;
	public:
		static String^ BaseDirectory;
		static String^ AddinDirectory;
		static String^ LogDirectory;
		static Utils();
		static void Log(String^ format, ... array<Object^>^ args);
		static void Log(String^ message);
	};
}