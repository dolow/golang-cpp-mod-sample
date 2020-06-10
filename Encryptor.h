//
//  Encryptor.h
//  Encryptor
//
//  Created by kuwabara_yuki on 2020/06/08.
//  Copyright © 2020 kuwabara_yuki. All rights reserved.
//

class Encryptor {
public:
    ~Encryptor();

    static Encryptor* instance();
    void encrypt(char* ct, char* pt);
    const char* decrypt(char* ct);

private:
    Encryptor();
    static Encryptor* _instance;
};
