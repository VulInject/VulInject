static int nd_intel_test_cmd_unlock_unit(struct nfit_test *t,
struct nd_intel_unlock_unit *nd_cmd,
unsigned int buf_len, int dimm)
{
struct device *dev = &t->pdev.dev;
struct nfit_test_sec *sec = &dimm_sec_info[dimm];

if (!(sec->state & ND_INTEL_SEC_STATE_LOCKED) ||
(sec->state & ND_INTEL_SEC_STATE_FROZEN)) {
nd_cmd->status = ND_INTEL_STATUS_INVALID_STATE;
dev_dbg(dev, "unlock unit: invalid state: %#x\n",
sec->state);
} else if (memcmp(nd_cmd->passphrase, sec->passphrase,
ND_INTEL_PASSPHRASE_SIZE) != 0) {
nd_cmd->status = ND_INTEL_STATUS_INVALID_PASS;
dev_dbg(dev, "unlock unit: invalid passphrase\n");
} else {
nd_cmd->status = 0;
sec->state = ND_INTEL_SEC_STATE_ENABLED;
dev_dbg(dev, "Unit unlocked\n");
}

dev_dbg(dev, "unlocking status returned: %#x\n", nd_cmd->status);
return 0;
}