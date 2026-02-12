static routerstatus_t *
mock_router_get_status_by_digest(networkstatus_t *c, const char *d)
{
(void) c;
++mock_rgsbd_called;

if (fast_memeq(d, "\x5d\x76", 2)) {
memcpy(mock_rgsbd_val_a->descriptor_digest, d, 32);
return mock_rgsbd_val_a;
} else if (fast_memeq(d, "\x20\xd1", 2)) {
memcpy(mock_rgsbd_val_b->descriptor_digest, d, 32);
return mock_rgsbd_val_b;
} else {
return NULL;
}
}