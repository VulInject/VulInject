static size_t write_run(WinDumpPhyMemRun64 *run, int fd, Error **errp)
{
void *buf;
uint64_t addr = run->BasePage << TARGET_PAGE_BITS;
uint64_t size = run->PageCount << TARGET_PAGE_BITS;
uint64_t len, l;
size_t total = 0;

while (size) {
len = size;

buf = cpu_physical_memory_map(addr, &len, false);
if (!buf) {
error_setg(errp, "win-dump: failed to map physical range"
" 0x%016" PRIx64 "-0x%016" PRIx64, addr, addr + size - 1);
return 0;
}

l = qemu_write_full(fd, buf, len);
cpu_physical_memory_unmap(buf, addr, false, len);
if (l != len) {
error_setg(errp, QERR_IO_ERROR);
return 0;
}

addr += l;
size -= l;
total += l;
}

return total;
}