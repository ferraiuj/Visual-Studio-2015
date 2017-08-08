
Public Class Form1

    Dim l As Point = New Point(-100, -100)
    Dim form1 As New Form()
    Dim a As Double = 99
    Dim b As Double = 119
    Dim c As Double = 134
    Dim d As Double = 179
    Dim e As double = 219
    Dim f As Double = 249
    Dim tax As Double = 0.05
    Private Sub Form1_LocationChanged(sender As Object, e As EventArgs) Handles MyBase.LocationChanged
        Dim q As Integer

        q = x

        'Form2.Location = form1.Location 'New System.Drawing.Point(x, y)
        Form2.Location = New Point(0, 250)

    End Sub

    Private Sub Form1_Click(sender As Object, e As EventArgs) Handles MyBase.Click

    End Sub

    Private Sub Button3_MouseClick(sender As Object, e As MouseEventArgs) Handles Button3.MouseClick


        Form2.Show()
        Form2.MdiParent = Me
        form1.Size = New Size(1000, 1000)
        Dim q As Integer

        q = x

        Form2.Location = form1.Location 'New System.Drawing.Point(x, y)
    End Sub

    Private Sub Button1_Click(sender As Object, e As EventArgs) Handles Button1.Click
        If (RadioButton2.Checked) And RadioButton3.Checked Then

            TextBox2.Text = "103.95$"
        ElseIf (RadioButton2.Checked) And RadioButton4.Checked Then
            TextBox2.Text = "124.95$"
        ElseIf (RadioButton2.Checked) And RadioButton5.Checked Then
            TextBox2.Text = "140.7$"
        End If

        If (RadioButton1.Checked) And RadioButton3.Checked Then
            TextBox2.Text = "187.95$"
        ElseIf (RadioButton1.Checked) And RadioButton4.Checked Then
            TextBox2.Text = "229.95$"
        ElseIf (RadioButton1.Checked) And RadioButton5.Checked Then
            TextBox2.Text = "261.45$"
        End If
    End Sub

    Private Sub Button2_Click(sender As Object, e As EventArgs) Handles Button2.Click
        Close()
    End Sub

End Class
