static int trim_caps(struct ceph_mds_client *mdsc,
struct ceph_mds_session *session,
int max_caps)
{
int trim_caps = session->s_nr_caps - max_caps;

dout("trim_caps mds%d start: %d / %d, trim %d\n",
session->s_mds, session->s_nr_caps, max_caps, trim_caps);
if (trim_caps > 0) {
session->s_trim_caps = trim_caps;
iterate_session_caps(session, trim_caps_cb, session);
dout("trim_caps mds%d done: %d / %d, trimmed %d\n",
session->s_mds, session->s_nr_caps, max_caps,
trim_caps - session->s_trim_caps);
session->s_trim_caps = 0;
}

ceph_send_cap_releases(mdsc, session);
return 0;
}