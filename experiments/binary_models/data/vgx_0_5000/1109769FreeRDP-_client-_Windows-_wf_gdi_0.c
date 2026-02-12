static BOOL wf_gdi_opaque_rect(rdpContext* context, const OPAQUE_RECT_ORDER* opaque_rect)
{
RECT rect;
HBRUSH brush;
COLORREF brush_color;
wfContext* wfc = (wfContext*)context;

if (!context || !opaque_rect)
return FALSE;

if (!wf_decode_color(wfc, opaque_rect->color, &brush_color, NULL))
return FALSE;

rect.left = opaque_rect->nLeftRect;
rect.top = opaque_rect->nTopRect;
rect.right = opaque_rect->nLeftRect + opaque_rect->nWidth;
rect.bottom = opaque_rect->nTopRect + opaque_rect->nHeight;
brush = CreateSolidBrush(brush_color);
FillRect(wfc->drawing->hdc, &rect, brush);
DeleteObject(brush);

if (wfc->drawing == wfc->primary)
wf_invalidate_region(wfc, rect.left, rect.top, rect.right - rect.left + 1,
rect.bottom - rect.top + 1);

return TRUE;
}