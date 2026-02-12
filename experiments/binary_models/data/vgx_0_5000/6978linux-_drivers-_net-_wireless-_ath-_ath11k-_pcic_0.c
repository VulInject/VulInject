int ath11k_pcic_init_msi_config(struct ath11k_base *ab)
{
const struct ath11k_msi_config *msi_config;
int i;

for (i = 0; i < ARRAY_SIZE(ath11k_msi_config); i++) {
msi_config = &ath11k_msi_config[i];

if (msi_config->hw_rev == ab->hw_rev)
break;
}

if (i == ARRAY_SIZE(ath11k_msi_config)) {
ath11k_err(ab, "failed to fetch msi config, unsupported hw version: 0x%x\n",
ab->hw_rev);
return -EINVAL;
}

ab->pci.msi.config = msi_config;
return 0;
}