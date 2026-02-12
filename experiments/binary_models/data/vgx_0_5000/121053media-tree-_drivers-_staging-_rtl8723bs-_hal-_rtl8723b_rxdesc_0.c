static void process_link_qual(struct adapter *padapter, union recv_frame *prframe)
{
struct rx_pkt_attrib *pattrib;
struct signal_stat *signal_stat;

if (prframe == NULL || padapter == NULL)
return;

pattrib = &prframe->u.hdr.attrib;
signal_stat = &padapter->recvpriv.signal_qual_data;



if (signal_stat->update_req) {
signal_stat->total_num = 0;
signal_stat->total_val = 0;
signal_stat->update_req = 0;
}

signal_stat->total_num++;
signal_stat->total_val  += pattrib->phy_info.SignalQuality;
signal_stat->avg_val = signal_stat->total_val / signal_stat->total_num;
} 