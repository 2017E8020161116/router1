#include "icmp.h"
#include "ip.h"
#include "rtable.h"
#include "arp.h"
#include "base.h"

#include <stdio.h>
#include <stdlib.h>

// send icmp packet: construct icmp packet and send the packet by ip_send_packet
void icmp_send_packet(const char *in_pkt, int len, u8 type, u8 code)
{
	fprintf(stdout, "TODO: implement this function please.\n");
}
