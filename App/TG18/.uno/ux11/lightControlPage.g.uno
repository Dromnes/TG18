[Uno.Compiler.UxGenerated]
public partial class lightControlPage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly lightControlPage __parent;
        [Uno.WeakReference] internal readonly lightControlPage __parentInstance;
        public Template(lightControlPage parent, lightControlPage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
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
            var __self = new global::customButtonCircle();
            var temp2 = new global::Fuse.Reactive.Data("colorPalette");
            var temp3 = new global::Fuse.Reactive.Member(temp2, "mdBlack");
            __self_Text_inst = new TG18_customButtonCircle_Text_Property(__self, __selector0);
            var temp4 = new global::Fuse.Reactive.Data("text");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_TextColor_inst = new TG18_customButtonCircle_TextColor_Property(__self, __selector1);
            var temp5 = new global::Fuse.Reactive.Data("textColor");
            var temp = new global::Fuse.Drawing.GradientStop();
            temp_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp, __selector2);
            var temp6 = new global::Fuse.Reactive.Data("color");
            var temp1 = new global::Fuse.Drawing.GradientStop();
            temp1_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp1, __selector2);
            var temp7 = new global::Fuse.Reactive.Member(temp3, "code");
            var temp8 = new global::Fuse.Drawing.LinearGradient();
            var temp9 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp10 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(60f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(0f, 20f, 0f, 10f);
            __self.FontSize = 20;
            temp8.AngleDegrees = 120f;
            temp8.Stops.Add(temp);
            temp8.Stops.Add(temp1);
            temp.Offset = 0.4f;
            temp1.Offset = 1f;
            __self.Fills.Add(temp8);
            __self.Bindings.Add(temp9);
            __self.Bindings.Add(temp10);
            __self.Bindings.Add(temp11);
            __self.Bindings.Add(temp12);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "TextColor";
        static global::Uno.UX.Selector __selector2 = "Color";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static lightControlPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public lightControlPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("lightControlButtons");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new global::Fuse.Controls.Grid();
        var temp5 = new Template(this, this);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/lightControlPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Pages/lightControlPage.js"));
        temp3.Children.Add(temp4);
        temp4.RowCount = 6;
        temp4.ColumnCount = 4;
        temp4.Children.Add(temp);
        temp.Templates.Add(temp5);
        temp.Bindings.Add(temp6);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "lightControlPage";
}
