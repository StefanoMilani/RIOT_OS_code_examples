/**
 * @file        key-management.h
 * @brief       Contains declaration of structs and functions
 * 				to manage keys
 *
 * @author      Stefano Milani <stefano.milani96@gmail.com>
 *
 */
#ifndef ECC_UTILS_H
#define ECC_UTILS_H

// Compute fake server keys
int generate_fake_server_key();

// Compute priv/pub key pair annd compress pub key
int compute_keys(int argc, char* argv[]);

// Uncompress key and compute secret
int compute_secret(int argc, char* argv[]);

#endif // ECC_UTILS_H