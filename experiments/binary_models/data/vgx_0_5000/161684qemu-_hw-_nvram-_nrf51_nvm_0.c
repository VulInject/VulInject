static uint64_t io_read(void *opaque, hwaddr offset, unsigned int size)
{
NRF51NVMState *s = NRF51_NVM(opaque);
uint64_t r = 0;

switch (offset) {
case NRF51_NVMC_READY:
r = NRF51_NVMC_READY_READY;
break;
case NRF51_NVMC_CONFIG:
r = s->config;
break;
default:
qemu_log_mask(LOG_GUEST_ERROR,
"%s: bad read offset 0x%" HWADDR_PRIx "\n", __func__, offset);
break;
}

return r;
}