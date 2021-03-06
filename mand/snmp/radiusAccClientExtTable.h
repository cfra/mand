/*
 * Note: this file originally auto-generated by mib2c using
 *        : mib2c.array-user.conf,v 5.26 2005/04/26 22:13:28 rstory Exp $
 *
 * $Id:$
 *
 * Yes, there is lots of code here that you might not use. But it is much
 * easier to remove code than to add it!
 */
#ifndef RADIUSACCCLIENTEXTTABLE_H
#define RADIUSACCCLIENTEXTTABLE_H

#include "dm_token.h"
#include "dm_store.h"

#include <net-snmp/net-snmp-config.h>
#include <net-snmp/library/container.h>
#include <net-snmp/agent/table_array.h>

/** Index radiusAccClientExtIndex is internal */

typedef struct radiusAccClientExtTable_context_s {
	netsnmp_index   index;                        /** THIS MUST BE FIRST!!! */
	
	uint32_t        radiusAccClientExtIndex;	  /** INTEGER32 = ASN_INTEGER */
	unsigned long   radiusAccServerCounterDiscontinuity;
	oid             oid[1];

	struct dm_value_table *client;
} radiusAccClientExtTable_context;

/*************************************************************
 * oid declarations
 */

#define radiusAccClientExtTable_TABLE_OID 1,3,6,1,2,1,67,2,1,1,1,15

/*************************************************************
 * column number definitions for table radiusAccClientExtTable
 */
#define COLUMN_RADIUSACCCLIENTEXTINDEX 1
#define COLUMN_RADIUSACCCLIENTINETADDRESSTYPE 2
#define COLUMN_RADIUSACCCLIENTINETADDRESS 3
#define COLUMN_RADIUSACCCLIENTEXTID 4
#define COLUMN_RADIUSACCSERVEXTPACKETSDROPPED 5
#define COLUMN_RADIUSACCSERVEXTREQUESTS 6
#define COLUMN_RADIUSACCSERVEXTDUPREQUESTS 7
#define COLUMN_RADIUSACCSERVEXTRESPONSES 8
#define COLUMN_RADIUSACCSERVEXTBADAUTHENTICATORS 9
#define COLUMN_RADIUSACCSERVEXTMALFORMEDREQUESTS 10
#define COLUMN_RADIUSACCSERVEXTNORECORDS 11
#define COLUMN_RADIUSACCSERVEXTUNKNOWNTYPES 12
#define COLUMN_RADIUSACCSERVERCOUNTERDISCONTINUITY 13
#define radiusAccClientExtTable_COL_MIN 2
#define radiusAccClientExtTable_COL_MAX 13

void init_radiusAccClientExtTable(void);
void add_radiusAccClientExtTable(dm_id id, struct dm_value_table *client);
void del_radiusAccClientExtTable(dm_id id);

#endif

