[Uno.Compiler.UxGenerated]
public partial class pcControlPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly pcControlPage __parent;
        [Uno.WeakReference] internal readonly pcControlPage __parentInstance;
        public Template(pcControlPage parent, pcControlPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> temp_Value_inst;
        global::Uno.UX.Property<float4> temp_Color_inst;
        global::Uno.UX.Property<float4> temp1_Color_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::customButton();
            var temp = new global::tBuilt();
            temp_Value_inst = new TG18_FuseControlsTextControl_Value_Property(temp, __selector0);
            var temp2 = new global::Fuse.Reactive.Data("text");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            temp_Color_inst = new TG18_FuseControlsTextControl_Color_Property(temp, __selector1);
            var temp3 = new global::Fuse.Reactive.Data("textColor");
            var temp1 = new global::Fuse.Drawing.GradientStop();
            temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector1);
            var temp4 = new global::Fuse.Reactive.Data("color");
            var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp6 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp7 = new global::Fuse.Drawing.LinearGradient();
            var temp8 = new global::Fuse.Drawing.GradientStop();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Aspect = 1f;
            __self.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
            __self.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
            __self.FontSize = 72;
            temp.FontSize = 26f;
            temp.Alignment = Fuse.Elements.Alignment.Center;
            temp.Bindings.Add(temp5);
            temp.Bindings.Add(temp6);
            temp7.AngleDegrees = 120f;
            temp7.Stops.Add(temp1);
            temp7.Stops.Add(temp8);
            temp1.Offset = 0.4f;
            temp8.Offset = 1f;
            temp8.Color = float4(0.1333333f, 0.1333333f, 0.1333333f, 1f);
            __self.Background = temp7;
            __self.Children.Add(temp);
            __self.Bindings.Add(temp9);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Value";
        static global::Uno.UX.Selector __selector1 = "Color";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static pcControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public pcControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("colorPalette");
        var temp4 = new global::Fuse.Reactive.Data("colorPalette");
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp5 = new global::Fuse.Reactive.Data("pcControlButtons");
        var temp1 = new global::Fuse.Drawing.GradientStop();
        temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector1);
        var temp6 = new global::Fuse.Reactive.Member(temp3, "bckgLightGreen");
        var temp2 = new global::Fuse.Drawing.GradientStop();
        temp2_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp2, __selector1);
        var temp7 = new global::Fuse.Reactive.Member(temp4, "bckgDarkGreen");
        var temp8 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp9 = new global::Fuse.Controls.Panel();
        var temp10 = new global::Fuse.Drawing.LinearGradient();
        var temp11 = new global::Fuse.Controls.Grid();
        var temp12 = new Template(this, this);
        var temp13 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp14 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp15 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector2;
        temp8.LineNumber = 2;
        temp8.FileName = "Pages/pcControlPage.ux";
        temp8.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/pcControlPage.js"));
        temp9.Background = temp10;
        temp9.Children.Add(temp11);
        temp9.Bindings.Add(temp14);
        temp9.Bindings.Add(temp15);
        temp10.AngleDegrees = 90f;
        temp10.Stops.Add(temp1);
        temp10.Stops.Add(temp2);
        temp1.Offset = 0.4f;
        temp2.Offset = 1f;
        temp11.RowCount = 6;
        temp11.ColumnCount = 4;
        temp11.Children.Add(temp);
        temp.Templates.Add(temp12);
        temp.Bindings.Add(temp13);
        __g_nametable.This = this;
        this.Children.Add(temp8);
        this.Children.Add(temp9);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "pcControlPage";
}
