object Form1: TForm1
  Left = 192
  Top = 108
  Width = 393
  Height = 264
  Caption = 'Table Example'
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Default'
  Font.Style = []
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object OvcTable1: TOvcTable
    Left = 8
    Top = 16
    Width = 289
    Height = 204
    RowLimit = 10
    Colors.ActiveFocused = clHighlight
    Colors.ActiveFocusedText = clHighlightText
    Colors.ActiveUnfocused = clHighlight
    Colors.ActiveUnfocusedText = clHighlightText
    Colors.Locked = clBtnFace
    Colors.LockedText = clWindowText
    Colors.Editing = clBtnFace
    Colors.EditingText = clWindowText
    Colors.Selected = clHighlight
    Colors.SelectedText = clHighlightText
    Controller = OvcController1
    GridPenSet.NormalGrid.NormalColor = clBtnShadow
    GridPenSet.NormalGrid.SecondColor = clBtnHighlight
    GridPenSet.NormalGrid.Style = psDot
    GridPenSet.NormalGrid.Effect = geBoth
    GridPenSet.LockedGrid.NormalColor = clBtnShadow
    GridPenSet.LockedGrid.SecondColor = clBtnHighlight
    GridPenSet.LockedGrid.Style = psSolid
    GridPenSet.LockedGrid.Effect = ge3D
    GridPenSet.CellWhenFocused.NormalColor = clBlack
    GridPenSet.CellWhenFocused.SecondColor = clBtnHighlight
    GridPenSet.CellWhenFocused.Style = psSolid
    GridPenSet.CellWhenFocused.Effect = geBoth
    GridPenSet.CellWhenUnfocused.NormalColor = clBlack
    GridPenSet.CellWhenUnfocused.SecondColor = clBtnHighlight
    GridPenSet.CellWhenUnfocused.Style = psDash
    GridPenSet.CellWhenUnfocused.Effect = geBoth
    LockedRowsCell = OvcTCString2
    Options = [otoNoRowResizing, otoNoColResizing, otoNoSelection]
    ScrollBars = ssNone
    TabOrder = 0
    OnGetCellData = OvcTable1GetCellData
    OnGetCellAttributes = OvcTable1GetCellAttributes
    CellData = (
      'Form1.OvcTCString2'
      'Form1.OvcTCPictureField1'
      'Form1.OvcTCString1'
      'Form1.OvcTCRowHead1')
    RowData = (
      20)
    ColData = (
      40
      False
      True
      'Form1.OvcTCRowHead1'
      155
      False
      True
      'Form1.OvcTCString1'
      90
      False
      True
      'Form1.OvcTCPictureField1')
  end
  object BitBtn1: TBitBtn
    Left = 304
    Top = 195
    Width = 75
    Height = 25
    TabOrder = 1
    Kind = bkClose
  end
  object OvcController1: TOvcController
    EntryCommands.TableList = (
      'Default'
      True
      ()
      'WordStar'
      False
      ()
      'Grid'
      False
      ())
    Left = 17
    Top = 201
  end
  object OvcTCString1: TOvcTCString
    Adjust = otaBottomLeft
    AutoAdvanceChar = False
    AutoAdvanceLeftRight = False
    Font.Color = clBtnText
    Font.Height = -11
    Font.Name = 'Default'
    Font.Style = []
    MaxLength = 49
    ShowHint = False
    Table = OvcTable1
    TableFont = False
    TextStyle = tsFlat
    UseWordWrap = False
    UseASCIIZStrings = False
    Left = 124
    Top = 201
  end
  object OvcTCString2: TOvcTCString
    AutoAdvanceChar = False
    AutoAdvanceLeftRight = False
    Font.Color = clBtnText
    Font.Height = -11
    Font.Name = 'Default'
    Font.Style = []
    MaxLength = 0
    ShowHint = False
    Table = OvcTable1
    TableFont = False
    TextStyle = tsFlat
    UseWordWrap = False
    UseASCIIZStrings = False
    Left = 53
    Top = 201
  end
  object OvcTCRowHead1: TOvcTCRowHead
    ShowActiveRow = False
    Font.Color = clBtnText
    Font.Height = -11
    Font.Name = 'Default'
    Font.Style = []
    Table = OvcTable1
    TableFont = False
    TextStyle = tsFlat
    Left = 89
    Top = 201
  end
  object OvcTCPictureField1: TOvcTCPictureField
    DataType = pftWord
    PictureMask = 'iii'
    MaxLength = 3
    Adjust = otaCenterRight
    CaretOvr.Shape = csBlock
    ControlCharColor = clRed
    DecimalPlaces = 0
    Epoch = 0
    Font.Color = clBtnText
    Font.Height = -11
    Font.Name = 'Default'
    Font.Style = []
    EFColors.Highlight.BackColor = clHighlight
    EFColors.Highlight.TextColor = clHighlightText
    PadChar = ' '
    PasswordChar = '*'
    ShowHint = False
    Table = OvcTable1
    TableFont = False
    TextMargin = 2
    TextStyle = tsFlat
    Left = 160
    Top = 201
    RangeHigh = {FFFF0000000000000000}
    RangeLow = {00000000000000000000}
    Options = [efoCaretToEnd, efoTrimBlanks]
  end
end
