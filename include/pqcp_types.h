/*
 * This file is part of the openHiTLS project.
 *
 * openHiTLS is licensed under the Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *
 *     http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 */

#ifndef PQCP_TYPES_H
#define PQCP_TYPES_H

#ifdef __cplusplus
extern "C" {
#endif

#define CRYPT_PARAM_SCLOUDPLUS_BASE 900
#define CRYPT_PARAM_SCLOUDPLUS_PUBKEY (CRYPT_PARAM_SCLOUDPLUS_BASE+1)
#define CRYPT_PARAM_SCLOUDPLUS_PRVKEY (CRYPT_PARAM_SCLOUDPLUS_BASE+2)


typedef enum
{
    PQCP_SCLOUDPLUS_KEY_BITS,
    PQCP_SCLOUDPLUS_GET_PARA,
    PQCP_SCLOUDPLUS_GET_CIPHERLEN,
    PQCP_SCLOUDPLUS_GET_SECBITS,
} PQCP_PKEY_CTRL_TYPE;


#ifdef __cplusplus
}
#endif

#endif /* PQCP_TYPES_H */
