static uint32_t nrf_dfu_bl_continue(uint32_t src_addr, nrf_dfu_bank_t * p_bank)
{
uint32_t        ret_val     = NRF_SUCCESS;
uint32_t const  len         = (p_bank->image_size - s_dfu_settings.sd_size);


src_addr += s_dfu_settings.sd_size;

NRF_LOG_INFO("Verifying BL: Addr: 0x%08x, Src: 0x%08x, Len: 0x%08x\r\n", MAIN_APPLICATION_START_ADDR, src_addr, len);



ret_val = nrf_dfu_mbr_compare((uint32_t*)BOOTLOADER_START_ADDR, (uint32_t*)src_addr, len);
if (ret_val == NRF_SUCCESS)
{
NRF_LOG_INFO("Bootloader was verified\r\n");


nrf_dfu_invalidate_bank(p_bank);
(void)nrf_dfu_settings_write(NULL);
}
else
{
NRF_LOG_INFO("Bootloader not verified, copying: Src: 0x%08x, Len: 0x%08x\r\n", src_addr, len);


ret_val = nrf_dfu_mbr_copy_bl((uint32_t*)src_addr, len);
if(ret_val != NRF_SUCCESS)
{
NRF_LOG_INFO("Request to copy BL failed\r\n");
}
}

return ret_val;
}