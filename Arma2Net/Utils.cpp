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

#include "Utils.h"

using namespace System::Globalization;
using namespace System::IO;

namespace Arma2Net
{
	static Utils::Utils()
	{
		Utils::BaseDirectory = Path::GetDirectoryName(Assembly::GetExecutingAssembly()->Location);
		Utils::AddinDirectory = Path::Combine(BaseDirectory, "Addins");

		Utils::LogDirectory = Path::Combine(Environment::GetFolderPath(Environment::SpecialFolder::LocalApplicationData), "Arma2NET");
		Directory::CreateDirectory(Utils::LogDirectory);
		Utils::logWriter = gcnew StreamWriter(Path::Combine(Utils::LogDirectory, "Arma2NET.log"), true);
	}

	void Utils::Log(String^ format, ... array<Object^>^ args)
	{
		Utils::Log(String::Format(format, args));
	}

	void Utils::Log(String^ message)
	{
		try
		{
			logWriter->WriteLine(DateTime::Now.ToString(CultureInfo::InvariantCulture) + " " + message);
		}
		catch (...) {}
	}
}