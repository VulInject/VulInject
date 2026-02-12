void es_slot_on_write(uint8_t slot_no, uint8_t length, uint8_t * p_frame_data)
{
slot_boundary_check(&slot_no);

if (p_frame_data == NULL)
{
APP_ERROR_CHECK(NRF_ERROR_NULL);
}


if (length == 0 || (length == 1 && p_frame_data[0] == 0))
{
(void)es_slot_reg_clear_slot(&m_reg, slot_no);
}

else if (p_frame_data[0] == ES_FRAME_TYPE_EID &&
(length == ESCS_EID_WRITE_ECDH_LENGTH || length == ESCS_EID_WRITE_IDK_LENGTH))
{
if (m_reg.slots[slot_no].configured)
(void)es_slot_reg_clear_slot(&m_reg, slot_no);
configure_eid_slot(slot_no, length, p_frame_data);
}

else
{
if (m_reg.slots[slot_no].configured)
(void)es_slot_reg_clear_slot(&m_reg, slot_no);
configure_slot(slot_no, length, p_frame_data);
}
}