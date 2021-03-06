/// YANG Development Kit
// Copyright 2016 Cisco Systems. All rights reserved
//
////////////////////////////////////////////////////////////////
// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.
//
//////////////////////////////////////////////////////////////////


#include "path/path_private.hpp"

/////////////////////////////////////////////////////////////////////////
/// YDKException
/////////////////////////////////////////////////////////////////////////
ydk::YDKException::YDKException(const std::string& msg) : err_msg{msg}
{
	what();
}

const char* ydk::YDKException::what() const noexcept
{
	return err_msg.c_str();
}

/////////////////////////////////////////////////////////////////////////
/// YDKCoreException
/////////////////////////////////////////////////////////////////////////
ydk::path::YDKCoreException::YDKCoreException(const std::string& msg) : ydk::YDKException{msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YDKIllegalStateException
//////////////////////////////////////////////////////////////////////////
ydk::YDKIllegalStateException::YDKIllegalStateException(const std::string& msg) : ydk::YDKException{msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YDKInvalidArgumentException
//////////////////////////////////////////////////////////////////////////
ydk::YDKInvalidArgumentException::YDKInvalidArgumentException(const std::string& msg) : ydk::YDKException{msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YDKOperationNotSupportedException
//////////////////////////////////////////////////////////////////////////
ydk::YDKOperationNotSupportedException::YDKOperationNotSupportedException(const std::string& msg) : ydk::YDKException{msg}
{

}

//////////////////////////////////////////////////////////////////////////
/// YDKDataValidationException
//////////////////////////////////////////////////////////////////////////
ydk::path::YDKDataValidationException::YDKDataValidationException() : ydk::path::YDKCoreException{"Data Validation Exception"}
{

}

//////////////////////////////////////////////////////////////////////////
/// YDKPathException
//////////////////////////////////////////////////////////////////////////
ydk::path::YDKPathException::YDKPathException(ydk::path::YDKPathException::Error error_code) : ydk::path::YDKCoreException{"Data Validation Exception"}, err{error_code}
{

}



/////////////////////////////////////////////////////////////////////////
/// YDKCodecException
/////////////////////////////////////////////////////////////////////////
ydk::path::YDKCodecException::YDKCodecException(YDKCodecException::Error ec) : YDKCoreException(ly_errmsg()), err{ec}
{

}
