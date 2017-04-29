[Uno.Compiler.UxGenerated]
public partial class homePage: Fuse.Controls.Page
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly homePage __parent;
        [Uno.WeakReference] internal readonly homePage __parentInstance;
        public Template(homePage parent, homePage parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Visual> temp_Target_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::customButton();
            var temp = new global::Fuse.Navigation.NavigateTo();
            temp_Target_inst = new TG18_FuseNavigationNavigateTo_Target_Property(temp, __selector0);
            var temp1 = new global::Fuse.Reactive.Data("navName");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            __self_Text_inst = new TG18_customButton_Text_Property(__self, __selector1);
            var temp2 = new global::Fuse.Reactive.Data("name");
            var temp3 = new global::Fuse.Gestures.Clicked();
            var temp4 = new global::Fuse.Reactive.DataBinding(temp_Target_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp5 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Aspect = 3f;
            __self.Width = new Uno.UX.Size(75f, Uno.UX.Unit.Percent);
            __self.BoxSizing = Fuse.Elements.Element.BoxSizingMode.FillAspect;
            __self.TextColor = float4(0f, 0f, 0f, 255f);
            __self.FontSize = 48;
            temp3.Actions.Add(temp);
            temp3.Bindings.Add(temp4);
            __self.Children.Add(temp3);
            __self.Bindings.Add(temp5);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Target";
        static global::Uno.UX.Selector __selector1 = "Text";
    }
    global::Uno.UX.Property<object> temp_Items_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static homePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public homePage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Each();
        temp_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("pages");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.StackPanel();
        var temp4 = new Template(this, this);
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Items_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Name = __selector1;
        temp2.LineNumber = 2;
        temp2.FileName = "Pages/homePage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../Pages/homePage.js"));
        temp3.Children.Add(temp);
        temp.Templates.Add(temp4);
        temp.Bindings.Add(temp5);
        __g_nametable.This = this;
        this.Children.Add(temp2);
        this.Children.Add(temp3);
    }
    static global::Uno.UX.Selector __selector0 = "Items";
    static global::Uno.UX.Selector __selector1 = "homePage";
}
