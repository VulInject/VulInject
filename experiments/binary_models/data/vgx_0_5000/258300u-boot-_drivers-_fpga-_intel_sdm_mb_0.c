int intel_sdm_mb_load(Altera_desc *desc, const void *rbf_data, size_t rbf_size)
{
int ret;
u64 arg = 1;

debug("Invoking FPGA_CONFIG_START...\n");

ret = invoke_smc(INTEL_SIP_SMC_FPGA_CONFIG_START, &arg, 1, NULL, 0);

if (ret) {
puts("Failure in RECONFIG mailbox command!\n");
return ret;
}

ret = send_bitstream(rbf_data, rbf_size);
if (ret) {
puts("Error sending bitstream!\n");
return ret;
}


udelay(RECONFIG_STATUS_INTERVAL_DELAY_US);

debug("Polling with MBOX_RECONFIG_STATUS...\n");
ret = reconfig_status_polling_resp();
if (ret) {
puts("FPGA reconfiguration failed!");
return ret;
}

puts("FPGA reconfiguration OK!\n");

return ret;
}