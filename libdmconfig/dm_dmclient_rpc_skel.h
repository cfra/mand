/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */

/** RPC's from the server for the client
 *
 * prototypes for the main request handler switch
 */

#ifndef DM_DMCLIENT_RPC_SKEL_H
#define DM_DMCLIENT_RPC_SKEL_H

#include "libdmconfig/dmmsg.h"
#include "libdmconfig/dmconfig.h"

uint32_t rpc_dmclient_switch(void *ctx, const DMC_REQUEST *req, DM2_AVPGRP *obj, DM2_REQUEST **answer);

#endif
