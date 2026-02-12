set_rate (cherokee_handler_streaming_t *hdl,
cherokee_connection_t        *conn,
long                          rate)
{
cherokee_handler_streaming_props_t *props = HDL_STREAMING_PROP(hdl);

if (rate <= 0)
return ret_ok;


hdl->auto_rate_bps = rate + (rate * props->auto_rate_factor);


conn->limit_bps = props->auto_rate_boost * hdl->auto_rate_bps;
conn->limit_rate = true;


if (hdl->start > 0) {
hdl->boost_until = hdl->start + conn->limit_bps;
} else {
hdl->boost_until = conn->limit_bps;
}

TRACE(ENTRIES, "Limiting rate (initial boost): %d bytes, until=%d\n",
conn->limit_bps, hdl->boost_until);
return ret_ok;
}