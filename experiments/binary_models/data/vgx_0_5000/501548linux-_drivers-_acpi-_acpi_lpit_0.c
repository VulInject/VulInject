static int lpit_read_residency_counter_us(u64 *counter, bool io_mem)
{
int err;

if (io_mem) {
u64 count = 0;
int error;

error = acpi_os_read_iomem(residency_info_mem.iomem_addr, &count,
residency_info_mem.gaddr.bit_width);
if (error)
return error;

*counter = div64_u64(count * 1000000ULL, residency_info_mem.frequency);
return 0;
}

err = rdmsrl_safe(residency_info_ffh.gaddr.address, counter);
if (!err) {
u64 mask = GENMASK_ULL(residency_info_ffh.gaddr.bit_offset +
residency_info_ffh.gaddr. bit_width - 1,
residency_info_ffh.gaddr.bit_offset);

*counter &= mask;
*counter >>= residency_info_ffh.gaddr.bit_offset;
*counter = div64_u64(*counter * 1000000ULL, residency_info_ffh.frequency);
return 0;
}

return -ENODATA;
}