static int ice_discover_flash_size(struct ice_hw *hw)
{
u32 min_size = 0, max_size = ICE_AQC_NVM_MAX_OFFSET + 1;
int status;

status = ice_acquire_nvm(hw, ICE_RES_READ);
if (status)
return status;

while ((max_size - min_size) > 1) {
u32 offset = (max_size + min_size) / 2;
u32 len = 1;
u8 data;

status = ice_read_flat_nvm(hw, offset, &len, &data, false);
if (status == -EIO &&
hw->adminq.sq_last_status == ICE_AQ_RC_EINVAL) {
ice_debug(hw, ICE_DBG_NVM, "%s: New upper bound of %u bytes\n",
__func__, offset);
status = 0;
max_size = offset;
} else if (!status) {
ice_debug(hw, ICE_DBG_NVM, "%s: New lower bound of %u bytes\n",
__func__, offset);
min_size = offset;
} else {

goto err_read_flat_nvm;
}
}

ice_debug(hw, ICE_DBG_NVM, "Predicted flash size is %u bytes\n", max_size);

hw->flash.flash_size = max_size;

err_read_flat_nvm:
ice_release_nvm(hw);

return status;
}