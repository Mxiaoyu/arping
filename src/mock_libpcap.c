#include<pcap.h>

int
pcap_setfilter(pcap_t *pcap, struct bpf_program *prog)
{
        return 0;
}

int
pcap_dispatch(pcap_t *pcap, int num, pcap_handler handler, u_char *packet)
{
        return 0;
}

int
pcap_compile(pcap_t *pcap, struct bpf_program *prog, const char *x, int y,
             bpf_u_int32 z)
{
        return 0;
}

pcap_t*
pcap_open_live(const char *ifname, int a, int b, int c, char *d)
{
        return NULL;
}

int
pcap_setnonblock(pcap_t *pcap, int a, char *b)
{
        return 0;
}

int
pcap_get_selectable_fd(pcap_t *pcap)
{
        return 0;
}

char*
pcap_lookupdev(char *ifname)
{
        return 0;
}
/* ---- Emacs Variables ----
 * Local Variables:
 * c-basic-offset: 8
 * indent-tabs-mode: nil
 * End:
 */
