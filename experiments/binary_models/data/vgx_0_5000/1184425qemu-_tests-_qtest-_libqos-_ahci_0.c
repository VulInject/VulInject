void ahci_io(AHCIQState *ahci, uint8_t port, uint8_t ide_cmd,
void *buffer, size_t bufsize, uint64_t sector)
{
uint64_t ptr;
AHCICommandProp *props;

props = ahci_command_find(ide_cmd);
g_assert(props);
ptr = ahci_alloc(ahci, bufsize);
g_assert(!bufsize || ptr);
qtest_memset(ahci->parent->qts, ptr, 0x00, bufsize);

if (bufsize && props->write) {
qtest_bufwrite(ahci->parent->qts, ptr, buffer, bufsize);
}

ahci_guest_io(ahci, port, ide_cmd, ptr, bufsize, sector);

if (bufsize && props->read) {
qtest_bufread(ahci->parent->qts, ptr, buffer, bufsize);
}

ahci_free(ahci, ptr);
}