

#include <string.h>

#include "xla/service/custom_call_status.h"



void CSetSuccess(XlaCustomCallStatus* status) {
  XlaCustomCallStatusSetSuccess(status);
}

void CSetFailure(XlaCustomCallStatus* status, const char* message,
                 size_t message_len) {
  XlaCustomCallStatusSetFailure(status, message, message_len);
}
