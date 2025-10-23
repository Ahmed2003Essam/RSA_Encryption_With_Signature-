# 🔐RSA Encryption (C++)
A C++ program that **encrypts and decrypts messages using the RSA algorithm**, supporting long text messages and a wide range of symbols. The project demonstrates **public-key cryptography**, including message signing and key generation

## 🚀 Features
* Encrypts messages using RSA public and private keys.
* Generates a simple digital signature for each message.
* Handles long messages and symbols efficiently using modular exponentiation.


## How It Works
1. Generates two prime numbers p and q and computes n = p*q.
2 .Calculates Euler's totient (p-1)*(q-1) to find coprime numbers for encryption.
3. Chooses a public key e and computes a private key d.
4. Converts each character in the message to its ASCII code.
5. Encrypts the message using modular exponentiation:
6. ```cpp
   encrypted_char = (ascii_char^e) % n
7. Generates a digital signature using the private key.
8. Outputs the **public key, encrypted message, and digital signature.**

## Tech Stack
* C++
* Standard libraries: <bits/stdc++.h>, <iostream>, <vector>
