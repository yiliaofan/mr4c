/**
  * Copyright 2014 Google Inc. All rights reserved.
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

#ifndef __MR4C_MESSAGE_CONSUMER_H__
#define __MR4C_MESSAGE_CONSUMER_H__

#include <string>
#include "Message.h"

namespace MR4C {

/**
  * Class to extend to receive messages sent to topics
*/
class MessageConsumer {

	public:

		virtual void receiveMessage(const Message& msg) =0;


};

}

#endif
