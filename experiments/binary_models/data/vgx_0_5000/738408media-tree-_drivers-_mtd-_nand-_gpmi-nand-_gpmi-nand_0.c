static int init_hardware(struct gpmi_nand_data *this)
{
int ret;


struct nand_timing  safe_timing = {
.data_setup_in_ns        = 80,
.data_hold_in_ns         = 60,
.address_setup_in_ns     = 25,
.gpmi_sample_delay_in_ns =  6,
.tREA_in_ns              = -1,
.tRLOH_in_ns             = -1,
.tRHOH_in_ns             = -1,
};


ret = gpmi_init(this);
if (ret)
return ret;

this->timing = safe_timing;
return 0;
}