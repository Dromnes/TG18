namespace tg
{
    [Uno.Compiler.UxGenerated]
    public partial class ColorButton: tg.CircleButton
    {
        string _field_ButtonName;
        [global::Uno.UX.UXOriginSetter("SetButtonName")]
        public string ButtonName
        {
            get { return _field_ButtonName; }
            set { SetButtonName(value, null); }
        }
        public void SetButtonName(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_ButtonName)
            {
                _field_ButtonName = value;
                OnPropertyChanged("ButtonName", origin);
            }
        }
        float4 _field_ButtonColor;
        [global::Uno.UX.UXOriginSetter("SetButtonColor")]
        public float4 ButtonColor
        {
            get { return _field_ButtonColor; }
            set { SetButtonColor(value, null); }
        }
        public void SetButtonColor(float4 value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_ButtonColor)
            {
                _field_ButtonColor = value;
                OnPropertyChanged("ButtonColor", origin);
            }
        }
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.Property<string> this_ButtonName_inst;
        global::Uno.UX.Property<float4> this_ButtonColor_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static ColorButton()
        {
        }
        [global::Uno.UX.UXConstructor]
        public ColorButton()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp2 = new global::Fuse.Reactive.Constant(this);
            var temp3 = new global::Fuse.Reactive.Data("colorPalette");
            var temp4 = new global::Fuse.Reactive.Member(temp3, "mdBlack");
            var temp = new global::Fuse.Drawing.GradientStop();
            temp_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp, __selector0);
            var temp5 = new global::Fuse.Reactive.Property(temp2, TG18_accessor_tg_ColorButton_ButtonColor.Singleton);
            this_ButtonName_inst = new TG18_tgColorButton_ButtonName_Property(this, __selector1);
            this_ButtonColor_inst = new TG18_tgColorButton_ButtonColor_Property(this, __selector2);
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp1 = new global::Fuse.Drawing.GradientStop();
            temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector0);
            var temp6 = new global::Fuse.Reactive.Member(temp4, "code");
            var temp7 = new global::Fuse.Drawing.LinearGradient();
            var temp8 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
            this.Name = __selector3;
            temp7.AngleDegrees = 120f;
            temp7.Stops.Add(temp);
            temp7.Stops.Add(temp1);
            temp.Offset = 0.4f;
            temp1.Offset = 1f;
            __g_nametable.This = this;
            __g_nametable.Properties.Add(this_ButtonName_inst);
            __g_nametable.Properties.Add(this_ButtonColor_inst);
            this.Fills.Add(temp7);
            this.Bindings.Add(temp8);
            this.Bindings.Add(temp9);
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "ButtonName";
        static global::Uno.UX.Selector __selector2 = "ButtonColor";
        static global::Uno.UX.Selector __selector3 = "colorButton";
    }
}
