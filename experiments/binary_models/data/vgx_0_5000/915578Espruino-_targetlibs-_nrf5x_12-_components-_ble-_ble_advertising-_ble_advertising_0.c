uint32_t ble_advertising_whitelist_reply(ble_gap_addr_t const * p_gap_addrs,
uint32_t               addr_cnt,
ble_gap_irk_t  const * p_gap_irks,
uint32_t               irk_cnt)
{
if (!m_whitelist_reply_expected)
{
return NRF_ERROR_INVALID_STATE;
}

m_whitelist_reply_expected = false;


m_whitelist.addr_count = addr_cnt;
m_whitelist.irk_count  = irk_cnt;

for (uint32_t i = 0; i < addr_cnt; i++)
{
*m_whitelist.pp_addrs[i] = p_gap_addrs[i];
}

for (uint32_t i = 0; i < irk_cnt; i++)
{
*m_whitelist.pp_irks[i] = p_gap_irks[i];
}


m_whitelist_in_use = ((addr_cnt > 0) || (irk_cnt > 0));


return NRF_SUCCESS;
}