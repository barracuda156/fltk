// generated by Fast Light User Interface Designer (fluid) version 1.0106

#ifndef widget_panel_h
#define widget_panel_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tabs.H>
#include <FL/Fl_Group.H>
extern void propagate_load(Fl_Group*, void*);
#include <FL/Fl_Input.H>
extern void label_cb(Fl_Input*, void*);
#include <FL/Fl_Choice.H>
extern Fl_Menu_Item labeltypemenu[];
extern void labeltype_cb(Fl_Choice*, void*);
extern void image_cb(Fl_Input*, void*);
#include <FL/Fl_Button.H>
extern void image_browse_cb(Fl_Button*, void*);
extern void inactive_cb(Fl_Input*, void*);
extern void inactive_browse_cb(Fl_Button*, void*);
extern void align_cb(Fl_Button*, void*);
#include <FL/Fl_Box.H>
#include <FL/Fl_Value_Input.H>
extern void x_cb(Fl_Value_Input*, void*);
extern Fl_Value_Input *widget_x_input;
extern void y_cb(Fl_Value_Input*, void*);
extern Fl_Value_Input *widget_y_input;
extern void w_cb(Fl_Value_Input*, void*);
extern Fl_Value_Input *widget_w_input;
extern void h_cb(Fl_Value_Input*, void*);
extern Fl_Value_Input *widget_h_input;
extern void slider_size_cb(Fl_Value_Input*, void*);
extern void min_cb(Fl_Value_Input*, void*);
extern void max_cb(Fl_Value_Input*, void*);
extern void step_cb(Fl_Value_Input*, void*);
extern void value_cb(Fl_Value_Input*, void*);
#include "Shortcut_Button.h"
extern void shortcut_in_cb(Shortcut_Button*, void*);
extern void xclass_cb(Fl_Input*, void*);
#include <FL/Fl_Light_Button.H>
extern void border_cb(Fl_Light_Button*, void*);
extern void modal_cb(Fl_Light_Button*, void*);
extern void non_modal_cb(Fl_Light_Button*, void*);
extern void visible_cb(Fl_Light_Button*, void*);
extern void active_cb(Fl_Light_Button*, void*);
extern void resizable_cb(Fl_Light_Button*, void*);
extern void hotspot_cb(Fl_Light_Button*, void*);
extern void tooltip_cb(Fl_Input*, void*);
extern Fl_Menu_Item fontmenu[];
extern void labelfont_cb(Fl_Choice*, void*);
extern void labelsize_cb(Fl_Value_Input*, void*);
extern void labelcolor_cb(Fl_Button*, void*);
extern Fl_Menu_Item boxmenu[];
extern void box_cb(Fl_Choice*, void*);
extern void color_cb(Fl_Button*, void*);
extern void down_box_cb(Fl_Choice*, void*);
extern void color2_cb(Fl_Button*, void*);
extern void textfont_cb(Fl_Choice*, void*);
extern void textsize_cb(Fl_Value_Input*, void*);
extern void textcolor_cb(Fl_Button*, void*);
extern void subclass_cb(Fl_Input*, void*);
extern void subtype_cb(Fl_Choice*, void*);
extern void name_cb(Fl_Input*, void*);
extern void name_public_cb(Fl_Light_Button*, void*);
extern void v_input_cb(Fl_Input*, void*);
extern Fl_Input *v_input[4];
#include <FL/Fl_Text_Editor.H>
extern void callback_cb(Fl_Text_Editor*, void*);
extern void user_data_cb(Fl_Input*, void*);
extern Fl_Menu_Item whenmenu[];
extern void when_cb(Fl_Choice*, void*);
extern void user_data_type_cb(Fl_Input*, void*);
extern void when_button_cb(Fl_Light_Button*, void*);
extern void overlay_cb(Fl_Button*, void*);
extern void revert_cb(Fl_Button*, void*);
#include <FL/Fl_Return_Button.H>
extern void ok_cb(Fl_Return_Button*, void*);
extern void cancel_cb(Fl_Button*, void*);
Fl_Double_Window* make_widget_panel();
#endif
