int cvmx_range_free_with_base(u64 range_addr, int base, int cnt)
{
u64 i, size;
u64 up = base + cnt;

size = cvmx_read64_uint64(addr_of_size(range_addr));
if (up > size) {
debug("ERROR: %s: invalid base or cnt size=%d base+cnt=%d\n",
__func__, (int)size, (int)up);
return -1;
}
for (i = base; i < up; i++) {
cvmx_write64_uint64(addr_of_element(range_addr, i),
CVMX_RANGE_AVAILABLE);
}
return 0;
}