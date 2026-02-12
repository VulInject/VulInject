s32 e1000_update_nvm_checksum_generic(struct e1000_hw *hw)
{
s32 ret_val;
u16 checksum = 0;
u16 i, nvm_data;

DEBUGFUNC("e1000_update_nvm_checksum");

for (i = 0; i < NVM_CHECKSUM_REG; i++) {
ret_val = hw->nvm.ops.read(hw, i, 1, &nvm_data);
if (ret_val) {
DEBUGOUT("NVM Read Error while updating checksum.\n");
return ret_val;
}
checksum += nvm_data;
}
checksum = (u16) NVM_SUM - checksum;
ret_val = hw->nvm.ops.write(hw, NVM_CHECKSUM_REG, 1, &checksum);
if (ret_val)
DEBUGOUT("NVM Write Error while updating checksum.\n");

return ret_val;
}