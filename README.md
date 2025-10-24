# 🔐RSA Encryption (C++)
A C++ program that **encrypts messages using the RSA algorithm**, supporting long text messages and a wide range of symbols. The project demonstrates **public-key cryptography**, including message signing and key generation

## 🚀 Features
* Encrypts messages using RSA public and private keys.
* Generates a simple digital signature for each message.
* Handles long messages and symbols efficiently using modular exponentiation.


## How It Works
1. Generates two prime numbers p and q and computes n = p*q.
2. Calculates Euler's totient (p-1)*(q-1) to find coprime numbers for encryption.
3. Chooses a public key e and computes a private key d.
4. Encrypts the message using modular exponentiation:
5. ```cpp
   encrypted_char = (ascii_char^e) % n
6. Generates a digital signature using the private key.
7. Outputs the **public key, encrypted message, and digital signature.**

## Tech Stack
* C++

## Notes
* Uses modular exponentiation to handle large numbers efficiently.
* Demonstrates the core RSA process: **key generation, encryption, and signature creation.**

