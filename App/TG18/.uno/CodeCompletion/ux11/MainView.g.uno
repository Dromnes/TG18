[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("heightControlPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::heightControlPage();
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "heightControlPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template1: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template1(MainView parent, MainView parentInstance): base("lightControlPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template1()
        {
        }
        public override object New()
        {
            var __self = new global::lightControlPage();
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "lightControlPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template2: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template2(MainView parent, MainView parentInstance): base("pcControlPage", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        static Template2()
        {
        }
        public override object New()
        {
            var __self = new global::pcControlPage();
            __self.Name = __selector0;
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "pcControlPage";
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template3: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template3(MainView parent, MainView parentInstance): base("Dot", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<Fuse.Visual> temp_Target_inst;
        global::Uno.UX.Property<Fuse.Resources.ImageSource> temp1_Source_inst;
        global::Uno.UX.Property<float4> temp2_Color_inst;
        internal global::Fuse.Controls.Panel icon;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "icon",
            "Dot"
        };
        static Template3()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Panel();
            var temp = new global::Fuse.Navigation.NavigateTo();
            temp_Target_inst = new TG18_FuseNavigationNavigateTo_Target_Property(temp, __selector0);
            var temp3 = new global::Fuse.Navigation.PageExpression("Visual");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp1 = new global::Fuse.Controls.Image();
            temp1_Source_inst = new TG18_FuseControlsImage_Source_Property(temp1, __selector1);
            var temp4 = new global::Fuse.Navigation.PageExpression("Icon");
            var temp2 = new global::Fuse.Controls.Rectangle();
            temp2_Color_inst = new TG18_FuseControlsShape_Color_Property(temp2, __selector2);
            var temp5 = new global::Fuse.Navigation.PageExpression("TabColor");
            var temp6 = new global::Fuse.Navigation.ActivatingAnimation();
            var temp7 = new global::Fuse.Animations.Scale();
            var temp8 = new global::Fuse.Gestures.Clicked();
            var temp9 = new global::Fuse.Reactive.DataBinding(temp_Target_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var icon = new global::Fuse.Controls.Panel();
            var temp10 = new global::Fuse.Reactive.DataBinding(temp1_Source_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp11 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
            __self.Name = __selector3;
            temp6.Animators.Add(temp7);
            temp7.Factor = 1.5f;
            temp7.Target = icon;
            temp8.Actions.Add(temp);
            temp8.Bindings.Add(temp9);
            icon.Padding = float4(10f, 10f, 10f, 10f);
            icon.Name = __selector4;
            icon.Children.Add(temp1);
            temp1.Bindings.Add(temp10);
            temp2.Opacity = 0.75f;
            temp2.Bindings.Add(temp11);
            __g_nametable.Objects.Add(icon);
            __g_nametable.Objects.Add(__self);
            __self.Children.Add(temp6);
            __self.Children.Add(temp8);
            __self.Children.Add(icon);
            __self.Children.Add(temp2);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Target";
        static global::Uno.UX.Selector __selector1 = "Source";
        static global::Uno.UX.Selector __selector2 = "Color";
        static global::Uno.UX.Selector __selector3 = "Dot";
        static global::Uno.UX.Selector __selector4 = "icon";
    }
    global::Uno.UX.Property<float4> temp_Color_inst;
    global::Uno.UX.Property<object> temp1_Items_inst;
    global::Uno.UX.Property<int> temp2_ColumnCount_inst;
    [global::Uno.UX.UXGlobalResource("fa")] public static readonly Fuse.Font fa;
    [global::Uno.UX.UXGlobalResource("built")] public static readonly Fuse.Font built;
    internal global::Fuse.Controls.PageControl pages;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "pages"
    };
    static MainView()
    {
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.Linear, "Linear");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticIn, "QuadraticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticOut, "QuadraticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuadraticInOut, "QuadraticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicIn, "CubicIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicOut, "CubicOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CubicInOut, "CubicInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticIn, "QuarticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticOut, "QuarticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuarticInOut, "QuarticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticIn, "QuinticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticOut, "QuinticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.QuinticInOut, "QuinticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalIn, "SinusoidalIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalOut, "SinusoidalOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.SinusoidalInOut, "SinusoidalInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialIn, "ExponentialIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialOut, "ExponentialOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ExponentialInOut, "ExponentialInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularIn, "CircularIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularOut, "CircularOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.CircularInOut, "CircularInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticIn, "ElasticIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticOut, "ElasticOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.ElasticInOut, "ElasticInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackIn, "BackIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackOut, "BackOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BackInOut, "BackInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceIn, "BounceIn");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceOut, "BounceOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Animations.Easing.BounceInOut, "BounceInOut");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Transparent, "Transparent");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Black, "Black");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Silver, "Silver");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Gray, "Gray");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.White, "White");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Maroon, "Maroon");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Red, "Red");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Purple, "Purple");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Fuchsia, "Fuchsia");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Green, "Green");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Lime, "Lime");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Olive, "Olive");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Yellow, "Yellow");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Navy, "Navy");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Blue, "Blue");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Teal, "Teal");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Colors.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Drawing.Brushes.Aqua, "Aqua");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.TopLeft, "TopLeft");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Center, "Center");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.Anchor, "Anchor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.HorizontalBoxCenter, "HorizontalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TransformOrigins.VerticalBoxCenter, "VerticalBoxCenter");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.TransformOriginOffset, "TransformOriginOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.PositionOffset, "PositionOffset");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.SizeFactor, "SizeFactor");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Elements.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Size, "Size");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.Actions.GiveFocus.Singleton, "GiveFocus");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.WhileKeyboardVisible.Keyboard, "Keyboard");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.SizeLayoutChange, "LayoutChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.WorldPositionChange, "WorldPositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.PositionChange, "PositionChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ResizeSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.LayoutTransition.ScalingSizeChange, "SizeChange");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Points, "Points");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.Pixels, "Pixels");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ContentSize, "ContentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Triggers.IScrolledLengths.ScrollViewSize, "ScrollViewSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.PreloadRetain, "PreloadRetain");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadUnused, "UnloadUnused");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.QuickUnload, "QuickUnload");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Resources.MemoryPolicy.UnloadInBackgroundPolicy, "UnloadInBackground");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Thin, "Thin");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Light, "Light");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Regular, "Regular");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Medium, "Medium");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Bold, "Bold");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.ThinItalic, "ThinItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.LightItalic, "LightItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.Italic, "Italic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.MediumItalic, "MediumItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.BoldItalic, "BoldItalic");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.Font.PlatformDefault, "PlatformDefault");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.ScalingModes.Identity, "Identity");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Local, "Local");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.ParentSize, "ParentSize");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Width, "Width");
        global::Uno.UX.Resource.SetGlobalKey(global::Fuse.TranslationModes.Height, "Height");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.fa, "fa");
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.built, "built");
        fa = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Fonts/fontawesome-webfont.ttf")));
        built = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/Fonts/Built.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(fa, "fa");
        global::Uno.UX.Resource.SetGlobalKey(built, "built");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp3 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp4 = new global::Fuse.Reactive.FuseJS.Http();
        var temp5 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp6 = new global::Fuse.Drawing.BrushConverter();
        var temp7 = new global::Fuse.Triggers.BusyTaskModule();
        var temp8 = new global::Fuse.Testing.UnoTestingHelper();
        var temp9 = new global::Fuse.FileSystem.FileSystemModule();
        var temp10 = new global::Fuse.Storage.StorageModule();
        var temp11 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp12 = new global::Polyfills.Window.WindowModule();
        var temp13 = new global::FuseJS.Globals();
        var temp14 = new global::FuseJS.Lifecycle();
        var temp15 = new global::FuseJS.Environment();
        var temp16 = new global::FuseJS.Base64();
        var temp17 = new global::FuseJS.Bundle();
        var temp18 = new global::FuseJS.FileReaderImpl();
        var temp19 = new global::FuseJS.UserEvents();
        var temp20 = new global::Fuse.Reactive.Data("colorPalette");
        var temp21 = new global::Fuse.Reactive.Member(temp20, "mdRed");
        var temp = new global::Fuse.Android.StatusBarConfig();
        temp_Color_inst = new TG18_FuseAndroidStatusBarConfig_Color_Property(temp, __selector0);
        var temp22 = new global::Fuse.Reactive.Member(temp21, "code");
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Each();
        temp1_Items_inst = new TG18_FuseReactiveEach_Items_Property(temp1, __selector1);
        var temp23 = new global::Fuse.Reactive.Data("pages");
        pages = new global::Fuse.Controls.PageControl();
        var temp2 = new global::Fuse.Layouts.GridLayout();
        temp2_ColumnCount_inst = new TG18_FuseLayoutsGridLayout_ColumnCount_Property(temp2, __selector2);
        var temp24 = new global::Fuse.Reactive.Data("pageCount");
        var temp25 = new global::Fuse.iOS.StatusBarConfig();
        var temp26 = new global::Fuse.Reactive.DataBinding(temp_Color_inst, temp22, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp27 = new global::Fuse.Controls.Panel();
        var temp28 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp29 = new global::Fuse.Controls.ClientPanel();
        var temp30 = new global::Fuse.Controls.Image();
        var temp31 = new global::Fuse.Effects.Blur();
        var heightControlPage = new Template(this, this);
        var lightControlPage = new Template1(this, this);
        var pcControlPage = new Template2(this, this);
        var temp32 = new global::Fuse.Reactive.DataBinding(temp1_Items_inst, temp23, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp33 = new global::Fuse.Controls.PageIndicator(pages);
        var Dot = new Template3(this, this);
        var temp34 = new global::Fuse.Reactive.DataBinding(temp2_ColumnCount_inst, temp24, __g_nametable, Fuse.Reactive.BindingMode.Default);
        this.Background = float4(0f, 0f, 0f, 1f);
        temp25.Style = Fuse.Platform.StatusBarStyle.Light;
        temp.Bindings.Add(temp26);
        temp28.Code = "\n\t\tvar colorPalette = require(\"Assets/JavaScript/colorPalette\");\n\t\tvar pages = require(\"Pages/pages\");\n\n\t\tmodule.exports = {\n\t\t\tcolorPalette: colorPalette.colors,\n\t\t\tpages: pages.pages,\n            pageCount: pages.pages.length\n\t\t}\t\t\n\t";
        temp28.LineNumber = 10;
        temp28.FileName = "MainView.ux";
        temp29.Children.Add(temp30);
        temp29.Children.Add(pages);
        temp29.Children.Add(temp33);
        temp30.StretchMode = Fuse.Elements.StretchMode.UniformToFill;
        temp30.Opacity = 0.9f;
        temp30.Layer = Fuse.Layer.Background;
        temp30.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../Assets/TG.png"));
        temp30.Children.Add(temp31);
        temp31.Radius = 50f;
        pages.Name = __selector3;
        pages.Children.Add(temp1);
        temp1.MatchKey = "navReference";
        temp1.Templates.Add(heightControlPage);
        temp1.Templates.Add(lightControlPage);
        temp1.Templates.Add(pcControlPage);
        temp1.Bindings.Add(temp32);
        temp33.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        global::Fuse.Controls.DockPanel.SetDock(temp33, Fuse.Layouts.Dock.Bottom);
        temp33.Layout = temp2;
        temp33.Templates.Add(Dot);
        temp33.Bindings.Add(temp34);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(pages);
        this.Children.Add(temp25);
        this.Children.Add(temp);
        this.Children.Add(temp27);
        this.Children.Add(temp28);
        this.Children.Add(temp29);
    }
    static global::Uno.UX.Selector __selector0 = "Color";
    static global::Uno.UX.Selector __selector1 = "Items";
    static global::Uno.UX.Selector __selector2 = "ColumnCount";
    static global::Uno.UX.Selector __selector3 = "pages";
}
