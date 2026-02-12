void hl_capture_page_fault(struct hl_device *hdev, u64 addr, u16 eng_id, bool is_pmmu)
{
struct page_fault_info *pgf_info = &hdev->captured_err_info.page_fault_info;


if (atomic_cmpxchg(&pgf_info->page_fault_detected, 0, 1))
return;

pgf_info->page_fault.timestamp = ktime_to_ns(ktime_get());
pgf_info->page_fault.addr = addr;
pgf_info->page_fault.engine_id = eng_id;
hl_capture_user_mappings(hdev, is_pmmu);

pgf_info->page_fault_info_available = true;
}