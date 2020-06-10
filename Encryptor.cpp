//
//  Encryptor.cpp
//  Encryptor
//
//  Created by kuwabara_yuki on 2020/06/08.
//  Copyright © 2020 kuwabara_yuki. All rights reserved.
//

#include "Encryptor.h"
#include <string>
#include <sstream>

#define KEY_LENGTH 16

constexpr char key[KEY_LENGTH] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
};

Encryptor* Encryptor::_instance = nullptr;

Encryptor::Encryptor() {
}
Encryptor::~Encryptor() {
}

Encryptor* Encryptor::instance()
{
    if (Encryptor::_instance == nullptr) {
        Encryptor::_instance = new Encryptor();
    }

    return Encryptor::_instance;
}
void Encryptor::encrypt(char* ct, char* pt)
{
    int index = 0;
    for (int i = 0; i < strlen(pt); i++) {
        ct[index] = static_cast<char>(key[index % KEY_LENGTH] ^ pt[i]);
        index++;
    }
}
const char* Encryptor::decrypt(char* ct)
{
    std::stringstream ss;
    for (int i = 0; i < strlen(ct); i++) {
        ss << static_cast<char>(key[i % KEY_LENGTH] ^ ct[i]);
    }

    return ss.str().c_str();
}
