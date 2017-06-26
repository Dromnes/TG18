[Uno.Compiler.UxGenerated]
public partial class MainView: Fuse.App
{
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly MainView __parent;
        [Uno.WeakReference] internal readonly MainView __parentInstance;
        public Template(MainView parent, MainView parentInstance): base("Dot", false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float4> __self_Color_inst;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "Dot"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::Fuse.Controls.Circle();
            var temp = new global::Fuse.Reactive.Data("colorPalette");
            var temp1 = new global::Fuse.Reactive.Member(temp, "mdWhite");
            __self_Color_inst = new TG18_FuseControlsShape_Color_Property(__self, __selector0);
            var temp2 = new global::Fuse.Reactive.Member(temp1, "code");
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp3 = new global::Fuse.Navigation.ActivatingAnimation();
            var temp4 = new global::Fuse.Animations.Scale();
            var temp5 = new global::Fuse.Reactive.DataBinding(__self_Color_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Default);
            __self.Width = new Uno.UX.Size(10f, Uno.UX.Unit.Unspecified);
            __self.Height = new Uno.UX.Size(10f, Uno.UX.Unit.Unspecified);
            __self.Margin = float4(10f, 10f, 10f, 10f);
            __self.Name = __selector1;
            temp3.Animators.Add(temp4);
            temp4.Factor = 1.5f;
            __g_nametable.Objects.Add(__self);
            __self.Children.Add(temp3);
            __self.Bindings.Add(temp5);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "Color";
        static global::Uno.UX.Selector __selector1 = "Dot";
    }
    global::Uno.UX.Property<float4> temp_TextColor_inst;
    global::Uno.UX.Property<float4> temp1_Color_inst;
    global::Uno.UX.Property<Fuse.Visual> nav_Active_inst;
    global::Uno.UX.Property<float4> temp2_Color_inst;
    global::Uno.UX.Property<float4> temp3_Color_inst;
    [global::Uno.UX.UXGlobalResource("built")] public static readonly Fuse.Font built;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    internal global::Fuse.Controls.PageControl nav;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "temp_eb0",
        "nav"
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
        global::Uno.UX.Resource.SetGlobalKey(global::MainView.built, "built");
        built = new global::Fuse.Font(new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../Assets/Fonts/Built.ttf")));
        global::Uno.UX.Resource.SetGlobalKey(built, "built");
    }
    [global::Uno.UX.UXConstructor]
    public MainView()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp4 = new global::Fuse.Reactive.FuseJS.DiagnosticsImplModule();
        var temp5 = new global::Fuse.Reactive.FuseJS.Http();
        var temp6 = new global::Fuse.Reactive.FuseJS.TimerModule();
        var temp7 = new global::Fuse.Drawing.BrushConverter();
        var temp8 = new global::Fuse.Triggers.BusyTaskModule();
        var temp9 = new global::Fuse.Testing.UnoTestingHelper();
        var temp10 = new global::Fuse.FileSystem.FileSystemModule();
        var temp11 = new global::Fuse.Storage.StorageModule();
        var temp12 = new global::Fuse.WebSocket.WebSocketClientModule();
        var temp13 = new global::Polyfills.Window.WindowModule();
        var temp14 = new global::FuseJS.Globals();
        var temp15 = new global::FuseJS.Lifecycle();
        var temp16 = new global::FuseJS.Environment();
        var temp17 = new global::FuseJS.Base64();
        var temp18 = new global::FuseJS.Bundle();
        var temp19 = new global::FuseJS.FileReaderImpl();
        var temp20 = new global::FuseJS.UserEvents();
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp21 = new global::Fuse.Reactive.Data("colorPalette");
        var temp22 = new global::Fuse.Reactive.Member(temp21, "mdLightGreen");
        var temp23 = new global::Fuse.Reactive.Data("colorPalette");
        var temp24 = new global::Fuse.Reactive.Member(temp23, "mdDarkGreen");
        var temp25 = new global::Fuse.Reactive.Data("setHeightPage");
        var temp26 = new global::Fuse.Reactive.Data("colorPalette");
        var temp27 = new global::Fuse.Reactive.Member(temp26, "mdWhite");
        var temp = new global::Fuse.Controls.Text();
        temp_TextColor_inst = new TG18_FuseControlsTextControl_TextColor_Property(temp, __selector0);
        var temp28 = new global::Fuse.Reactive.Member(temp27, "code");
        var temp29 = new global::Fuse.Reactive.Data("colorPalette");
        var temp30 = new global::Fuse.Reactive.Member(temp29, "mdRed");
        var temp1 = new global::Fuse.Controls.Panel();
        temp1_Color_inst = new TG18_FuseControlsPanel_Color_Property(temp1, __selector1);
        var temp31 = new global::Fuse.Reactive.Member(temp30, "code");
        nav = new global::Fuse.Controls.PageControl();
        nav_Active_inst = new TG18_FuseControlsNavigationControl_Active_Property(nav, __selector2);
        var temp32 = new global::Fuse.Reactive.Data("activePage");
        var temp2 = new global::Fuse.Drawing.GradientStop();
        temp2_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp2, __selector1);
        var temp33 = new global::Fuse.Reactive.Member(temp22, "code");
        var temp3 = new global::Fuse.Drawing.GradientStop();
        temp3_Color_inst = new TG18_FuseDrawingGradientStop_Color_Property(temp3, __selector1);
        var temp34 = new global::Fuse.Reactive.Member(temp24, "code");
        var temp35 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp36 = new global::Fuse.Controls.ClientPanel();
        var temp37 = new global::Fuse.Drawing.LinearGradient();
        var temp38 = new global::Fuse.Controls.StackPanel();
        var temp39 = new global::Fuse.Gestures.DoubleTapped();
        var temp40 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp25, __g_nametable);
        var temp41 = new global::Fuse.Reactive.DataBinding(temp_TextColor_inst, temp28, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp42 = new global::Fuse.Reactive.DataBinding(temp1_Color_inst, temp31, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp43 = new global::homePage();
        var temp44 = new global::heightControlPage();
        var temp45 = new global::lightControlPage();
        var temp46 = new global::pcControlPage();
        var temp47 = new global::Fuse.Reactive.DataBinding(nav_Active_inst, temp32, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp48 = new global::Fuse.Controls.PageIndicator(nav);
        var Dot = new Template(this, this);
        var temp49 = new global::Fuse.Reactive.DataBinding(temp2_Color_inst, temp33, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp50 = new global::Fuse.Reactive.DataBinding(temp3_Color_inst, temp34, __g_nametable, Fuse.Reactive.BindingMode.Default);
        temp35.Code = "\n\t\tvar colorPalette = require(\"Assets/colorPalette\");\n\t\tvar pages = require(\"Pages/pages\");\n\n\t\tvar Observable = require(\"FuseJS/Observable\");\n\t\tvar activePage = Observable(\"homePage\");\n\n\t\tfunction setHomePage() {\n\t\t\tactivePage.value = pages.homePage.navReference;\n\t\t}\n\n\t\tmodule.exports = {\n\t\t\tcolorPalette: colorPalette.colors,\n\t\t\tpages: pages.pages,\n\n\t\t\tsetHomePage: setHomePage,\n\t\t\tactivePage: activePage\n\t\t}\n\n\t\tconsole.log(activePage.value);\n\t";
        temp35.LineNumber = 4;
        temp35.FileName = "MainView.ux";
        temp36.Background = temp37;
        temp36.Children.Add(temp38);
        temp36.Children.Add(nav);
        temp36.Children.Add(temp48);
        temp36.Bindings.Add(temp49);
        temp36.Bindings.Add(temp50);
        temp37.AngleDegrees = 75f;
        temp37.Stops.Add(temp2);
        temp37.Stops.Add(temp3);
        temp2.Offset = 0.4f;
        temp3.Offset = 1f;
        global::Fuse.Controls.DockPanel.SetDock(temp38, Fuse.Layouts.Dock.Top);
        temp38.Children.Add(temp39);
        temp38.Children.Add(temp1);
        temp39.Actions.Add(temp40);
        temp39.Bindings.Add(temp_eb0);
        temp40.Handler += temp_eb0.OnEvent;
        temp1.Height = new Uno.UX.Size(45f, Uno.UX.Unit.Unspecified);
        temp1.Children.Add(temp);
        temp1.Bindings.Add(temp42);
        temp.Value = "Hjem";
        temp.FontSize = 22f;
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Bindings.Add(temp41);
        nav.Name = __selector3;
        nav.Children.Add(temp43);
        nav.Children.Add(temp44);
        nav.Children.Add(temp45);
        nav.Children.Add(temp46);
        nav.Bindings.Add(temp47);
        temp48.Alignment = Fuse.Elements.Alignment.Center;
        global::Fuse.Controls.DockPanel.SetDock(temp48, Fuse.Layouts.Dock.Bottom);
        temp48.Templates.Add(Dot);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(temp_eb0);
        __g_nametable.Objects.Add(nav);
        this.Children.Add(temp35);
        this.Children.Add(temp36);
    }
    static global::Uno.UX.Selector __selector0 = "TextColor";
    static global::Uno.UX.Selector __selector1 = "Color";
    static global::Uno.UX.Selector __selector2 = "Active";
    static global::Uno.UX.Selector __selector3 = "nav";
}
