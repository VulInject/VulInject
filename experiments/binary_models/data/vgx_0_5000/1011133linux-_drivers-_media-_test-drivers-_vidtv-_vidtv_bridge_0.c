static int vidtv_start_streaming(struct vidtv_dvb *dvb)
{
struct vidtv_mux_init_args mux_args = {
.mux_rate_kbytes_sec         = mux_rate_kbytes_sec,
.on_new_packets_available_cb = vidtv_bridge_on_new_pkts_avail,
.pcr_period_usecs            = pcr_period_msec * USEC_PER_MSEC,
.si_period_usecs             = si_period_msec * USEC_PER_MSEC,
.pcr_pid                     = pcr_pid,
.transport_stream_id         = VIDTV_DEFAULT_TS_ID,
.network_id                  = VIDTV_DEFAULT_NETWORK_ID,
.network_name                = VIDTV_DEFAULT_NETWORK_NAME,
.priv                        = dvb,
};
struct device *dev = &dvb->pdev->dev;
u32 mux_buf_sz;

if (dvb->streaming) {
dev_warn_ratelimited(dev, "Already streaming. Skipping.\n");
return 0;
}

if (mux_buf_sz_pkts)
mux_buf_sz = mux_buf_sz_pkts;
else
mux_buf_sz = vidtv_bridge_mux_buf_sz_for_mux_rate();

mux_args.mux_buf_sz  = mux_buf_sz;

dvb->streaming = true;
dvb->mux = vidtv_mux_init(dvb->fe[0], dev, &mux_args);
if (!dvb->mux)
return -ENOMEM;
vidtv_mux_start_thread(dvb->mux);

dev_dbg_ratelimited(dev, "Started streaming\n");
return 0;
}