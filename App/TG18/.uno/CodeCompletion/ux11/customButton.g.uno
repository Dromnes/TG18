[Uno.Compiler.UxGenerated]
public partial class customButton: Fuse.Controls.Panel
{
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
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<float> temp_FontSize_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    global::Uno.UX.Property<float4> this_TextColor_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.Property<int> this_FontSize_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static customButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public customButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::tBuilt();
        temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, TG18_accessor_customButton_Text.Singleton);
        this_TextColor_inst = new TG18_customButton_TextColor_Property(this, __selector1);
        this_Text_inst = new TG18_customButton_Text_Property(this, __selector2);
        this_FontSize_inst = new TG18_customButton_FontSize_Property(this, __selector3);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Constant(this);
        temp_Color_inst = new TG18_FuseControlsTextControl_Color_Property(temp, __selector4);
        var temp4 = new global::Fuse.Reactive.Property(temp3, TG18_accessor_customButton_TextColor.Singleton);
        var temp5 = new global::Fuse.Reactive.Constant(this);
        temp_FontSize_inst = new TG18_FuseControlsTextControl_FontSize_Property(temp, __selector3);
        var temp6 = new global::Fuse.Reactive.Property(temp5, TG18_accessor_customButton_FontSize.Singleton);
        this_Color_inst = new TG18_FuseControlsPanel_Color_Property(this, __selector4);
        var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp8 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_FontSize_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp10 = new global::Fuse.Gestures.WhilePressed();
        var temp11 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        this.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Margin = float4(4f, 4f, 4f, 4f);
        this.Name = __selector5;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(30f, 15f, 30f, 15f);
        temp.Bindings.Add(temp7);
        temp.Bindings.Add(temp8);
        temp.Bindings.Add(temp9);
        temp10.Animators.Add(temp11);
        temp11.Value = float4(0.06666667f, 0.2f, 0.5333334f, 1f);
        temp11.Duration = 0.05;
        temp11.DurationBack = 0.2;
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_TextColor_inst);
        __g_nametable.Properties.Add(this_Text_inst);
        __g_nametable.Properties.Add(this_FontSize_inst);
        this.Children.Add(temp);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "TextColor";
    static global::Uno.UX.Selector __selector2 = "Text";
    static global::Uno.UX.Selector __selector3 = "FontSize";
    static global::Uno.UX.Selector __selector4 = "Color";
    static global::Uno.UX.Selector __selector5 = "customButton";
}
