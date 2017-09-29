namespace tg
{
    [Uno.Compiler.UxGenerated]
    public partial class CircleButton: Fuse.Controls.Circle
    {
        string _field_Text;
        [global::Uno.UX.UXOriginSetter("SetText")]
        public string Text
        {
            get { return _field_Text; }
            set { SetText(value, null); }
        }
        public void SetText(string value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Text)
            {
                _field_Text = value;
                OnPropertyChanged("Text", origin);
            }
        }
        float4 _field_TextColor;
        [global::Uno.UX.UXOriginSetter("SetTextColor")]
        public float4 TextColor
        {
            get { return _field_TextColor; }
            set { SetTextColor(value, null); }
        }
        public void SetTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_TextColor)
            {
                _field_TextColor = value;
                OnPropertyChanged("TextColor", origin);
            }
        }
        Fuse.Font _field_Font;
        [global::Uno.UX.UXOriginSetter("SetFont")]
        public Fuse.Font Font
        {
            get { return _field_Font; }
            set { SetFont(value, null); }
        }
        public void SetFont(Fuse.Font value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_Font)
            {
                _field_Font = value;
                OnPropertyChanged("Font", origin);
            }
        }
        int _field_FontSize;
        [global::Uno.UX.UXOriginSetter("SetFontSize")]
        public int FontSize
        {
            get { return _field_FontSize; }
            set { SetFontSize(value, null); }
        }
        public void SetFontSize(int value, global::Uno.UX.IPropertyListener origin)
        {
            if (value != _field_FontSize)
            {
                _field_FontSize = value;
                OnPropertyChanged("FontSize", origin);
            }
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<Fuse.Font> temp_Font_inst;
        global::Uno.UX.Property<float> temp_FontSize_inst;
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<string> this_Text_inst;
        global::Uno.UX.Property<float4> this_TextColor_inst;
        global::Uno.UX.Property<Fuse.Font> this_Font_inst;
        global::Uno.UX.Property<int> this_FontSize_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static CircleButton()
        {
        }
        [global::Uno.UX.UXConstructor]
        public CircleButton()
        {
            InitializeUX();
        }
        void InitializeUX()
        {
            var temp1 = new global::Fuse.Reactive.Constant(this);
            var temp = new global::Fuse.Controls.Text();
            temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Property(temp1, TG18_accessor_tg_CircleButton_Text.Singleton);
            this_Text_inst = new TG18_tgCircleButton_Text_Property(this, __selector1);
            this_TextColor_inst = new TG18_tgCircleButton_TextColor_Property(this, __selector2);
            this_Font_inst = new TG18_tgCircleButton_Font_Property(this, __selector3);
            this_FontSize_inst = new TG18_tgCircleButton_FontSize_Property(this, __selector4);
            __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
            var temp3 = new global::Fuse.Reactive.Constant(this);
            temp_Font_inst = new TG18_FuseControlsTextControl_Font_Property(temp, __selector3);
            var temp4 = new global::Fuse.Reactive.Property(temp3, TG18_accessor_tg_CircleButton_Font.Singleton);
            var temp5 = new global::Fuse.Reactive.Constant(this);
            temp_FontSize_inst = new TG18_FuseControlsTextControl_FontSize_Property(temp, __selector4);
            var temp6 = new global::Fuse.Reactive.Property(temp5, TG18_accessor_tg_CircleButton_FontSize.Singleton);
            var temp7 = new global::Fuse.Reactive.Constant(this);
            temp_Color_inst = new TG18_FuseControlsTextControl_Color_Property(temp, __selector5);
            var temp8 = new global::Fuse.Reactive.Property(temp7, TG18_accessor_tg_CircleButton_TextColor.Singleton);
            var temp9 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp10 = new global::Fuse.Reactive.DataBinding(temp_Font_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp12 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp8, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp13 = new global::Fuse.Controls.Shadow();
            var temp14 = new global::Fuse.Gestures.WhilePressed();
            var temp15 = new global::Fuse.Animations.Scale();
            this.HitTestMode = Fuse.Elements.HitTestMode.LocalBoundsAndChildren;
            this.Name = __selector6;
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Bindings.Add(temp9);
            temp.Bindings.Add(temp10);
            temp.Bindings.Add(temp11);
            temp.Bindings.Add(temp12);
            temp13.Angle = 70f;
            temp13.Size = 5f;
            temp14.Animators.Add(temp15);
            temp15.Factor = 0.9f;
            temp15.Duration = 0.15;
            __g_nametable.This = this;
            __g_nametable.Properties.Add(this_Text_inst);
            __g_nametable.Properties.Add(this_TextColor_inst);
            __g_nametable.Properties.Add(this_Font_inst);
            __g_nametable.Properties.Add(this_FontSize_inst);
            this.Children.Add(temp);
            this.Children.Add(temp13);
            this.Children.Add(temp14);
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Text";
        static global::Uno.UX.Selector __selector2 = "TextColor";
        static global::Uno.UX.Selector __selector3 = "Font";
        static global::Uno.UX.Selector __selector4 = "FontSize";
        static global::Uno.UX.Selector __selector5 = "Color";
        static global::Uno.UX.Selector __selector6 = "circleButton";
    }
}
