#include "bridge.h"
#include "Encryptor.h"

#ifdef __cplusplus
extern "C" {
#endif

void encrypt(char* ct, char* pt)
{
  Encryptor::instance()->encrypt(ct, pt);
}

const char* decrypt(char* ct)
{
  return Encryptor::instance()->decrypt(ct);
}

#ifdef __cplusplus
}
#endif
