/* Copyright (c) 2010 - 2020, Nordic Semiconductor ASA
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef NRF_MESH_CONFIG_DFU_H__
#define NRF_MESH_CONFIG_DFU_H__

/**
 * @defgroup NRF_MESH_CONFIG_DFU DFU configuration
 * @ingroup MESH_API_GROUP_DFU
 * Compile time configuration of the DFU module.
 * @{
 */

/** Number of concurrent DFU transmissions available. */
#ifndef NRF_MESH_DFU_TX_SLOTS
#define NRF_MESH_DFU_TX_SLOTS 16
#endif

/** Time to wait for a response to a DFU request before giving up. */
#ifndef NRF_MESH_DFU_REQ_TIMEOUT_US
#define NRF_MESH_DFU_REQ_TIMEOUT_US                     (600000000UL)
#endif

/** Time to wait for a response to a DFU relay request before giving up. */
#ifndef NRF_MESH_DFU_RELAY_TIMEOUT_US
#define NRF_MESH_DFU_RELAY_TIMEOUT_US                   (600000000UL)
#endif

/** Time to wait for data during a transfer. */
#ifndef NRF_MESH_DFU_DATA_TRANSFER_TIMEOUT_US
#define NRF_MESH_DFU_DATA_TRANSFER_TIMEOUT_US           (600000000UL)
#endif

/** @} end of NRF_MESH_CONFIG_DFU */

#endif  /* NRF_MESH_CONFIG_DFU_H__ */
