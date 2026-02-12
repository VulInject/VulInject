ret_code_t nrf_drv_clock_init(void)
{
ret_code_t err_code = NRF_SUCCESS;
if (m_clock_cb.module_initialized)
{
err_code = NRF_ERROR_MODULE_ALREADY_INITIALIZED;
}
else
{
m_clock_cb.p_hf_head      = NULL;
m_clock_cb.hfclk_requests = 0;
m_clock_cb.p_lf_head      = NULL;
m_clock_cb.lfclk_requests = 0;
nrf_drv_common_power_clock_irq_init();
if (!softdevice_handler_is_enabled())
{
nrf_clock_lf_src_set((nrf_clock_lfclk_t)CLOCK_CONFIG_LF_SRC);
}

m_clock_cb.cal_state = CAL_STATE_IDLE;

m_clock_cb.module_initialized = true;
}

NRF_LOG_INFO("Function: %s, error code: %s.\r\n",
(uint32_t)__func__, (uint32_t)ERR_TO_STR(err_code));
return err_code;
}