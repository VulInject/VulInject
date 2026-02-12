static void ov7660_dump_registers(struct sd *sd)
{
int address;
pr_info("Dumping the ov7660 register state\n");
for (address = 0; address < 0xa9; address++) {
u8 value;
m5602_read_sensor(sd, address, &value, 1);
pr_info("register 0x%x contains 0x%x\n", address, value);
}

pr_info("ov7660 register state dump complete\n");

pr_info("Probing for which registers that are read/write\n");
for (address = 0; address < 0xff; address++) {
u8 old_value, ctrl_value;
u8 test_value[2] = {0xff, 0xff};

m5602_read_sensor(sd, address, &old_value, 1);
m5602_write_sensor(sd, address, test_value, 1);
m5602_read_sensor(sd, address, &ctrl_value, 1);

if (ctrl_value == test_value[0])
pr_info("register 0x%x is writeable\n", address);
else
pr_info("register 0x%x is read only\n", address);


m5602_write_sensor(sd, address, &old_value, 1);
}
}