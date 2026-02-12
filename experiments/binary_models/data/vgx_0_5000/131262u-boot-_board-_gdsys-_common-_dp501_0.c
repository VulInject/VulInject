static void dp501_link_training(u8 addr)
{
u8 val;
u8 link_bw;
u8 max_lane_cnt;
u8 lane_cnt;

val = i2c_reg_read(addr, 0x51);
if (val >= 0x0a)
link_bw = 0x0a;
else
link_bw = 0x06;
if (link_bw != val)
printf("DP sink supports %d Mbps link rate, set to %d Mbps\n",
val * 270, link_bw * 270);
i2c_reg_write(addr, 0x5d, link_bw); 
val = i2c_reg_read(addr, 0x52);
max_lane_cnt = val & 0x1f;
if (max_lane_cnt >= 4)
lane_cnt = 4;
else
lane_cnt = max_lane_cnt;
if (lane_cnt != max_lane_cnt)
printf("DP sink supports %d lanes, set to %d lanes\n",
max_lane_cnt, lane_cnt);
i2c_reg_write(addr, 0x5e, lane_cnt | (val & 0x80)); 
val = i2c_reg_read(addr, 0x53);
i2c_reg_write(addr, 0x5c, val); 

i2c_reg_write(addr, 0x5f, 0x0d); 
}