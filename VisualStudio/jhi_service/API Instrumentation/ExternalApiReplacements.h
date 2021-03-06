/*
	Copyright 2010-2016 Intel Corporation

	This software is licensed to you in accordance
	with the agreement between you and Intel Corporation.

	Alternatively, you can use this file in compliance
	with the Apache license, Version 2.


	Apache License, Version 2.0

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

	http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*/

#ifdef EXTERNAL_API_INSTRUMENTATION
#ifndef _EXTERNAL_API_REPLACEMENTS_H_
#define _EXTERNAL_API_REPLACEMENTS_H_
#include "ExternalApiTypedefs.h"

//getaddrinfo API instrumentation
PFN_GET_ADDRESS_INFO getaddrinfo_instrumentation;

//socket API instrumentation
PFN_SOCKET socket_instrumentation;

//bind API instrumentation
PFN_BIND bind_instrumentation;

#endif //_EXTERNAL_API_REPLACEMENTS_H_
#endif //EXTERNAL_API_INSTRUMENTATION
