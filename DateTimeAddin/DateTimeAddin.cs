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

using Arma2Net;
using SDateTime = System.DateTime;

namespace DateTimeAddin
{
	[Addin("DateTime", Author = "Scott_NZ", Description = "Date and time utilities")]
	public class DateTime : Addin
	{
		public override string Invoke(string args, int maxResultSize)
		{
			return SDateTime.Now.ToString();
		}
	}
}
