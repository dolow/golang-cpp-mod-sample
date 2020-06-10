package encryptor

/*
#cgo CPPFLAGS: -I./
#cgo CXXFLAGS: -std=c++11
#include "bridge.h"
#include <stdlib.h>
*/
import "C"

/**
 * Parssing char reference to C
 */
func Encrypt(ct *string, pt string) {
  pct := C.CString(*ct)
  ppt := C.CString(pt)

  C.encrypt(pct, ppt)
  *ct = C.GoString(pct)
}

/**
 * Receiving char from C
 */
func Decrypt(ct string) string {
  cstr := C.CString(ct)
  dt := C.decrypt(cstr)

  return C.GoString(dt)
}
