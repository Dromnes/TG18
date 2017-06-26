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
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::customButton();
            __self_Text_inst = new TG18_customButton_Text_Property(__self, __selector0);
            var temp = new global::Fuse.Reactive.Data("text");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_TextColor_inst = new TG18_customButton_TextColor_Property(__self, __selector1);
            var temp1 = new global::Fuse.Reactive.Data("textColor");
            var temp2 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp3 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Aspect = 1f;
            __self.Width = new Uno.UX.Size(50f, Uno.UX.Unit.Percent);
            __self.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
            __self.FontSize = 36;
            __self.Bindings.Add(temp2);
            __self.Bindings.Add(temp3);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Text";
        static global::Uno.UX.Selector __selector1 = "TextColor";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
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
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("pcControlButtons");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.Panel();
        var temp4 = new global::Fuse.Controls.StackPanel();
        var temp5 = new Template(this, this);
        var temp6 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/pcControlPage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Pages/pcControlPage.js"));
        temp3.Children.Add(temp4);
        temp4.Alignment = Fuse.Elements.Alignment.VerticalCenter;
        temp4.Children.Add(temp);
        temp.Templates.Add(temp5);
        temp.Bindings.Add(temp6);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "pcControlPage";
}
